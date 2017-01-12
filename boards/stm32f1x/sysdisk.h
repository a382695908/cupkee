#ifndef __SYSDISK_INC__
#define __SYSDISK_INC__

uint32_t sysdisk_sector_size(void);
uint64_t sysdisk_sector_number(void);
int      sysdisk_sector_read (uint32_t lba, uint8_t *buf);
int      sysdisk_sector_write(uint32_t lba, const uint8_t *data);

#endif /* __SYSDISK_INC__ */

