
#ifndef __EXFAT_INC__
#define __EXFAT_INC__

enum BOOT_REGION_OFFSET {
    BR_OFF_Boot              = 0,
    BR_OFF_ExtendBoot        = 1,
    BR_OFF_OEMParameter      = 9,
    BR_OFF_Reserved          = 10,
    BR_OFF_BootCheckSum      = 11,
    BR_OFF_BACKUP            = 12,
    BR_END = 24,
};

enum BOOT_SECTOR_OFFSET {
    BS_OFF_JmpBoot           = 0,
    BS_OFF_FSName            = 3,
    BS_OFF_PartitionOffset   = 64,
    BS_OFF_VolumeLength      = 72,

    BS_OFF_FatOffset         = 80,
    BS_OFF_FatLength         = 84,

    BS_OFF_ClusterHeapOffset = 88,
    BS_OFF_ClusterCount      = 92,

    BS_OFF_RootDirectoryCluster = 96,
    BS_OFF_VolumeSerialNumber   = 100,

    BS_OFF_FSReversion       = 104,
    BS_OFF_VolumeFlags       = 106,

    BS_OFF_BytesPreSectorShift = 108,
    BS_OFF_SectorsPreClusterShift = 109,

    BS_OFF_NumberOfFat       = 110,
    BS_OFF_DriveSelect       = 111,
    BS_OFF_PrecentInUse      = 112,
    BS_OFF_BootSignature     = 510
};

#define DIRECTORY_ENTRY_SIZE    32

enum DIRECTORY_ENTRY_TYPE {
    DE_TYPE_AllocationBitmap  = 0x81,
    DE_TYPE_UpcaseTable       = 0x82,
    DE_TYPE_VolumeLabel       = 0x83,
    DE_TYPE_File              = 0x85,
    DE_TYPE_VolumeGUID        = 0xA0,
    DE_TYPE_TexFATPadding     = 0xA1,
    DE_TYPE_WinCEACLTable     = 0xA2,
    DE_TYPE_StreamExtension   = 0xC0,
    DE_TYPE_FileName          = 0xC1,
};

enum GENERIC_DIRECTORY_ENTRY_OFFSET {
    GDE_OFF_Type              = 0,
    GDE_OFF_Flags             = 1,
    GDE_OFF_FirstCluster      = 20,
    GDE_OFF_DataLength        = 24,
};

enum UPCASE_DIRECTORY_ENTRY_OFFSET {
    UDE_OFF_TABLE_CHECKSUM    = 4
};

enum VOLLAB_DIRECTORY_ENTRY_OFFSET {
    VDE_OFF_CharacterCount    = 1,
    VDE_OFF_VolumeLabel       = 2
};

enum FILE_DIRECTORY_ENTRY_OFFSET {
    FDE_OFF_SecondaryCount              = 1,
    FDE_OFF_SetChecksum                 = 2,
    FDE_OFF_FileAttributes              = 4,
    FDE_OFF_CreateTimestamp             = 8,
    FDE_OFF_LastModifiedTimestamp       = 12,
    FDE_OFF_LastAccessedTimestamp       = 16,
    FDE_OFF_Create10msIncrement         = 20,
    FDE_OFF_LastModified10msIncrement   = 21,
    FDE_OFF_CreateTimezoneOffset        = 22,
    FDE_OFF_LastModifiedTimezoneOffset  = 23,
    FDE_OFF_LastAccessedTimezoneOffset  = 24,
};

enum STREAM_DIRECTORY_ENTRY_OFFSET {
    SDE_OFF_NameLength        = 3,
    SDE_OFF_NameHash          = 4,
    SDE_OFF_ValidDataLength   = 8,
};

enum NAME_DIRECTORY_ENTRY_OFFSET {
    NDE_OFF_NameName          = 2,
};

enum FILE_ATTRIBUTE {
    FILE_ATTR_ReadOnly        = 0x01,
    FILE_ATTR_Hidden          = 0x02,
    FILE_ATTR_System          = 0x04,
    FILE_ATTR_Directory       = 0x10,
    FILE_ATTR_Archive         = 0x20,
};

#endif /* __EXFAT_INC__ */

