# $FreeBSD$

PORTNAME=	xf86-video-vmware
PORTVERSION=	13.2.1
CATEGORIES=	x11-drivers

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X.Org vmware display driver

LICENSE=	MIT
LICENSE_FILES=	${WRKSRC}/COPYING

INSTALL_TARGET=	install-strip
XORG_CAT=	driver
USE_XORG=	xextproto xineramaproto videoproto

BROKEN_aarch64=		Fails to compile:  implicit declaration of function outl is invalid in C99

.include <bsd.port.mk>
