#ifndef UTIL_ASM_H
#define UTIL_ASM_H

void __fastcall__ startProgramFromRom(void);
void __fastcall__ loadProgram(void);
void __fastcall__ startProgram(void);
uint8_t __fastcall__ ascii2petscii(uint8_t ascii);
void __fastcall__ disableInterrupts(void);
void __fastcall__ enableInterrupts(void);
void __fastcall__ startEasyFlash(void);
void __fastcall__ rand256Block(void);
void __fastcall__ flashSetBank(uint8_t bank);
void __fastcall__ flashEraseSector(uint8_t* address);
void __fastcall__ flashWrite256Block(uint8_t* address);
void __fastcall__ flashWriteByte(uint8_t* address, uint8_t data);
uint8_t __fastcall__ flashReadByte(uint8_t* address);
uint8_t __fastcall__ flashCompare256Block(uint8_t* address);
uint16_t __fastcall__ flashReadId(void);

//extern uint8_t g_oldMenu;

extern uint8_t _BLOCK_BUFFER_START__;
#define g_blockBuffer (&_BLOCK_BUFFER_START__)

#endif
