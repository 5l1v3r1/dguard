#pragma once

#define	DEVICE_SYMLINK_NAME		L"\\DosDevices\\DgiFileErase"
#define DEVICE_NAME				L"\\Device\\DgiFileErase"
#define DEVICE_NAME_USER		L"\\\\.\\DgiFileErase"

#define IOCTL_ERASE_FILE			CTL_CODE(FILE_DEVICE_UNKNOWN, 0x802, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_ERASE_AUTOERASE		CTL_CODE(FILE_DEVICE_UNKNOWN, 0x803, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_ERASE_ISAUTOERASE		CTL_CODE(FILE_DEVICE_UNKNOWN, 0x804, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_ERASE_LASTSTATUS		CTL_CODE(FILE_DEVICE_UNKNOWN, 0x805, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_ERASE_MASK			CTL_CODE(FILE_DEVICE_UNKNOWN, 0x806, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_ERASE_COUNT			CTL_CODE(FILE_DEVICE_UNKNOWN, 0x807, METHOD_BUFFERED, FILE_ANY_ACCESS)

typedef struct _USER_ERASEFILE_CONTEXT {
	HANDLE			Event;
	CONST WCHAR*	FileName;
	SIZE_T			Length;
}USER_ERASEFILE_CONTEXT, *PUSER_ERASEFILE_CONTEXT;
