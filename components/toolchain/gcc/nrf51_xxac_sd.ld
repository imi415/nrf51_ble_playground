/* Linker script to configure memory regions. */

SEARCH_DIR(.)
GROUP(-lgcc -lc -lnosys)

MEMORY
{
  FLASH (rx) : ORIGIN = 0x0001B000, LENGTH = 0x25000
  RAM (rwx) :  ORIGIN = 0x20001FE8, LENGTH = 0x6018
}


INCLUDE "nrf51_common.ld"
