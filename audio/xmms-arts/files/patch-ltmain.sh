--- ltmain.sh.orig	Wed Aug  6 19:13:39 2003
+++ ltmain.sh	Tue Nov 11 22:47:49 2003
@@ -1084,6 +1084,13 @@
 	deplibs="$deplibs $arg"
 	continue
 	;;
+
+      -pthread)
+        compile_command="$compile_command -pthread"
+        finalize_command="$finalize_command -pthread"
+        compiler_flags="$compiler_flags -pthread"
+        continue
+        ;;
 
       -module)
 	module=yes
