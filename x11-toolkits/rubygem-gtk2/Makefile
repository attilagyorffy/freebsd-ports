# $FreeBSD$

PORTNAME=	gtk2
PORTVERSION=	3.1.0
CATEGORIES=	x11-toolkits rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby binding for GTK+2

LICENSE=	LGPL21+

RUN_DEPENDS=	rubygem-atk>=${PORTVERSION}:accessibility/rubygem-atk \
		rubygem-gdk_pixbuf2>=${PORTVERSION}:graphics/rubygem-gdk_pixbuf2 \
		rubygem-pango>=${PORTVERSION}:x11-toolkits/rubygem-pango

USE_GNOME=	gtk20
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
