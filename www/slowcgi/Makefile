# $FreeBSD$

PORTNAME=	slowcgi
PORTVERSION=	6.0.20161031
CATEGORIES=	www

MAINTAINER=	koue@chaosophia.net
COMMENT=	FastCGI interface for old CGI programs

LICENSE=	BSD3CLAUSE

LIB_DEPENDS=	libevent.so:devel/libevent2

WRKSRC_SUBDIR=	src/usr.sbin/${GH_PROJECT}

USE_GITHUB=	yes
GH_ACCOUNT=	koue
GH_PROJECT=	slowcgi

USES=		uidfix
USE_RC_SUBR=	slowcgi

CFLAGS+=	-Wall

MAKE_ARGS+=	BINDIR=${PREFIX}/sbin MANDIR=${PREFIX}/man/man

USERS=		www
GROUPS=		www

PLIST_FILES=	sbin/slowcgi \
		man/man8/slowcgi.8.gz

.include <bsd.port.mk>
