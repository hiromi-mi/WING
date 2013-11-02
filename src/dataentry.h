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
	char *name;			/* $@2hA|%U%!%$%kL>(B (e.g. img0003)*/
	unsigned char *data;		/* lrectwrite()$@$G;H$&%S%C%H%^%C%W%G!<%?(B */
	long width, height;		/* $@2hA|%5%$%:(B */
	struct _Image *nextimage;	/* $@<!$N2hA|$X$N%]%$%s%?(B */
} Image;

typedef struct _Item {
	float locx,locy;	/* $@CO?^>e$N:BI8(B */
	char *itemname;		/* $@L>A0(B(ASCII) $@%U%!%$%kL>$HF1$8(B */
	char *name;		/* $@L>A0(B($@4A;z(B) */
	char *yomi;		/* $@L>A0$NFI$_(B */
	char *info;		/* $@2r@bJ8;zNs(B */
	int infolines;		/* $@2r@bJ8;zNs9T?t(B */
	ItemList *super;	/* $@?F%$%s%9%?%s%9(B */
	ItemList *sub;		/* $@;R%$%s%9%?%s%9(B */
	ItemList *relateditem;	/* $@4XO"%$%s%9%?%9(B */
	Image *image;		/* $@2hA|%G!<%?$N%j%9%H$X$N%]%$%s%?(B */
	short r,g,b;		/* $@%?%$%H%kI=<(?'(B */
	int selected;		/* $@L\<!$GA*Br$5$l$?$+$I$&$+(B */
	WeightType weighttype;	/* $@=E$_%?%$%W(B */
	float weight;		/* $@=E$_(B */
} Item;

#define MAXITEM 1000
extern Item items[];		/* $@%G!<%?9`L\(B */
extern int nitem;		/* $@%G!<%?9`L\Am?t(B */

typedef struct _TOC {		/* $@L\<!$NI=(B */
	float x,y;		/* $@L\<!%\%?%s:BI8(B */
	float width,height;	/* $@L\<!%\%?%s%5%$%:(B */
	char *name;		/* $@9`L\L>(B */
	Item *item;		/* $@BP1~$9$k9`L\(B */
	int selected;		/* $@%\%?%sA*Br(B/$@HsA*Br(B */
} TOC;

#define MAXTOC (MAXITEM * 2)
extern TOC tocs[];		/* $@L\<!9`L\(B */
extern int ntoc;		/* $@L\<!9`L\Am?t(B */

void readdata();			/* $@9`L\%G!<%?$rFI$_9~$`(B */
     
#endif
