# Created by: Olivier Duchateau
# $FreeBSD$

PORTNAME=	lxhotkey
PORTVERSION=	0.1.0
CATEGORIES=	x11
MASTER_SITES=	SF/lxde/LXHotkey/

MAINTAINER=	olivierd@FreeBSD.org
COMMENT=	Keyboard shortcuts settings

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libfm-extra.so:x11/libfm-extra \
	libfm.so:x11/libfm \
	libfontconfig.so:x11-fonts/fontconfig \
	libfreetype.so:print/freetype2 \
	libunistring.so:devel/libunistring

USES=	gettext-tools gmake pathfix pkgconfig tar:xz
GNU_CONFIGURE=	yes
USE_GNOME=	glib20 gtk20 intltool cairo gdkpixbuf2
USE_XORG=	x11

CONFIGURE_ARGS=	--with-gtk=2

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/lxhotkey/*.so

.include <bsd.port.mk>
