
#ifndef __RAMDISK_INC__
#define __RAMDISK_INC__

int ramdisk_init(void);
int ramdisk_read(uint32_t lba, uint8_t *copy_to);
int ramdisk_write(uint32_t lba, const uint8_t *copy_from);
int ramdisk_blocks(void);

#endif /* __RAMDISK_INC__ */

