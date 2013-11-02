/*
	WING for Win95/NT

	97/09/05 mina
*/

/*
	$Date: 1995/02/03 14:07:35 $
	$Revision: 1.6 $
*/
#ifndef _SHOWGUIDE_H_
#define _SHOWGUIDE_H_

#include "dataentry.h"

extern int gWid;

void initGuide();			/* Guide�̏��������� */
void showGuide(void);			/* Guide�̒���\�����鏈�� */
void refreshGuide();
void setGuideArea(float);		/* Guide�͈̔͐ݒ菈�� */
void setGuidePos(long, long, float, char);		/* Guide�̈ʒu�̐ݒ菈�� */
Item *guideClick(long xPos, long yPos);	/* Guide�̃N���b�N���� */

void calcPos(long *, long *, long *, long *);
void distribute(float, float);
int inGuideWindow(long, long);
void getLine(char *, char *, long *, long);     /* GRB 01/25/95 */

void handleGuide(int, int);		/* �}�E�X�ƃy���̈��� */

void guideKeyFunc(unsigned char, int, int);

#endif

