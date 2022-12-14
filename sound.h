/* XDigger  Copyright (C) 1988-99 Alexander Lang.

XDigger is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

XDigger is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; see the file COPYING.  If not, write to
the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.  */

#ifndef _SOUND_H

#define _SOUND_H

#define TON_SCHRITT 0
#define TON_STEINE 1
#define TON_DIAMANT 2

extern void sound_init();
extern void sound(char ton_typ);
extern void sound_done();
extern void Fill_TonBuffer(int ton_low, int ton_high, int korrektur, Bool sndheader);
extern int sound_device;
extern int ton_laenge[3];
extern char ton_buffer[3][2000];

#define SD_AUTO -1
#define SD_NONE  0
#define SD_DSP   1
#define SD_AUDIO 2
#define SD_XBELL 3
#define SD_RPLAY 4
#define SD_NAS   5

#define CPU_FREQ_KC85_2   1750000   //CPU-Takt KC85/2
#define CPU_FREQ_KC85_3   1750000   //CPU-Takt KC85/3
#define CPU_FREQ_KC85_4   1773447.5 //CPU-Takt KC85/4
#define KC_CTC_FREQ_VT16  109375    //CPU_FREQ_KC85_3 / 16  //VT16  -> 109375Hz
#define KC_CTC_FREQ_VT256 6836      //CPU_FREQ_KC85_3 / 256 //VT256 -> 6835,9375Hz

#define TON_DSP_LOW 0x40
#define TON_DSP_HIGH 0xc0
#define TON_DSP_RATE 44100
#define TON_AUDIO_LOW 0x10
#define TON_AUDIO_HIGH 0x70
#define TON_AUDIO_RATE 8000
#define TON_NAS_LOW 0x10
#define TON_NAS_HIGH 0x70

#endif /* _SOUND_H */
