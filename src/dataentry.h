/*
	WING for Win95/NT

	97/09/03 mina
*/

/* -*-fundamental-*-

	$Date: 1995/02/03 11:32:58 $
	$Revision: 1.19 $
	$Source: /user/masui/WING/wing/RCS/dataentry.h,v $
*/
#ifndef _DATAENTRY_H_
#define _DATAENTRY_H_

#ifndef TEXTDIR
#define TEXTDIR "./data/text/"
#endif
#ifndef IMAGEDIR
#define IMAGEDIR "./data/rgb/"
#endif

typedef struct _ItemList {
	struct _Item *item;
	struct _ItemList *nextitem;
	float weight;
} ItemList;

typedef enum {
	NOWEIGHT,
	STANDARD,
	GENERAL
} WeightType;

typedef struct _Image {
	char *name;			/* $B2hA|%U%!%$%kL>(B (e.g. img0003)*/
	unsigned char *data;		/* lrectwrite()$B$G;H$&%S%C%H%^%C%W%G!<%?(B */
	long width, height;		/* $B2hA|%5%$%:(B */
	struct _Image *nextimage;	/* $B<!$N2hA|$X$N%]%$%s%?(B */
} Image;

typedef struct _Item {
	float locx,locy;	/* $BCO?^>e$N:BI8(B */
	char *itemname;		/* $BL>A0(B(ASCII) $B%U%!%$%kL>$HF1$8(B */
	char *name;		/* $BL>A0(B($B4A;z(B) */
	char *yomi;		/* $BL>A0$NFI$_(B */
	char *info;		/* $B2r@bJ8;zNs(B */
	int infolines;		/* $B2r@bJ8;zNs9T?t(B */
	ItemList *super;	/* $B?F%$%s%9%?%s%9(B */
	ItemList *sub;		/* $B;R%$%s%9%?%s%9(B */
	ItemList *relateditem;	/* $B4XO"%$%s%9%?%9(B */
	Image *image;		/* $B2hA|%G!<%?$N%j%9%H$X$N%]%$%s%?(B */
	short r,g,b;		/* $B%?%$%H%kI=<(?'(B */
	int selected;		/* $BL\<!$GA*Br$5$l$?$+$I$&$+(B */
	WeightType weighttype;	/* $B=E$_%?%$%W(B */
	float weight;		/* $B=E$_(B */
} Item;

#define MAXITEM 1000
extern Item items[];		/* $B%G!<%?9`L\(B */
extern int nitem;		/* $B%G!<%?9`L\Am?t(B */

typedef struct _TOC {		/* $BL\<!$NI=(B */
	float x,y;		/* $BL\<!%\%?%s:BI8(B */
	float width,height;	/* $BL\<!%\%?%s%5%$%:(B */
	char *name;		/* $B9`L\L>(B */
	Item *item;		/* $BBP1~$9$k9`L\(B */
	int selected;		/* $B%\%?%sA*Br(B/$BHsA*Br(B */
} TOC;

#define MAXTOC (MAXITEM * 2)
extern TOC tocs[];		/* $BL\<!9`L\(B */
extern int ntoc;		/* $BL\<!9`L\Am?t(B */

void readdata();			/* $B9`L\%G!<%?$rFI$_9~$`(B */
     
#endif
