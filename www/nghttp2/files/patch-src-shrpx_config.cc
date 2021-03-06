Obtained from:	https://github.com/nghttp2/nghttp2/commit/16be89f9ccba4d37e34ef03f20009a9845efeb99
		https://github.com/nghttp2/nghttp2/commit/1cc08c0a51d273afc0e7b4e11eeb0b889d154ee0

--- src/shrpx_config.cc.orig	2017-01-25 11:30:16 UTC
+++ src/shrpx_config.cc
@@ -1199,6 +1199,7 @@ int read_tls_sct_from_dir(std::vector<ui
 }
 } // namespace
 
+#if !LIBRESSL_IN_USE
 namespace {
 // Reads PSK secrets from path, and parses each line.  The result is
 // directly stored into config->tls.psk_secrets.  This function
@@ -1262,7 +1263,9 @@ int parse_psk_secrets(Config *config, co
   return 0;
 }
 } // namespace
+#endif // !LIBRESSL_IN_USE
 
+#if !LIBRESSL_IN_USE
 namespace {
 // Reads PSK secrets from path, and parses each line.  The result is
 // directly stored into config->tls.client.psk.  This function returns
@@ -1322,6 +1325,7 @@ int parse_client_psk_secrets(Config *con
   return 0;
 }
 } // namespace
+#endif // !LIBRESSL_IN_USE
 
 // generated by gennghttpxfun.py
 int option_lookup_token(const char *name, size_t namelen) {
@@ -3284,9 +3288,23 @@ int parse_config(Config *config, int opt
     return parse_duration(&config->conn.upstream.timeout.idle_read, opt,
                           optarg);
   case SHRPX_OPTID_PSK_SECRETS:
+#if !LIBRESSL_IN_USE
     return parse_psk_secrets(config, optarg);
+#else  // LIBRESSL_IN_USE
+    LOG(WARN)
+        << opt
+        << ": ignored because underlying TLS library does not support PSK";
+    return 0;
+#endif // LIBRESSL_IN_USE
   case SHRPX_OPTID_CLIENT_PSK_SECRETS:
+#if !LIBRESSL_IN_USE
     return parse_client_psk_secrets(config, optarg);
+#else  // LIBRESSL_IN_USE
+    LOG(WARN)
+        << opt
+        << ": ignored because underlying TLS library does not support PSK";
+    return 0;
+#endif // LIBRESSL_IN_USE
   case SHRPX_OPTID_CLIENT_NO_HTTP2_CIPHER_BLACK_LIST:
     config->tls.client.no_http2_cipher_black_list =
         util::strieq_l("yes", optarg);
