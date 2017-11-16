#include <ntndk.h>

void __stdcall NtProcessStartup( PPEB Argument ) {
    UNICODE_STRING unic;
    LARGE_INTEGER interval;
    interval.QuadPart = 50000000;
    RtlInitUnicodeString(&unic, L"Written by Mykhailo Yashchuk\n");
    NtDisplayString(&unic);
    NtDelayExecution(0, &interval);
    NtTerminateProcess(NtCurrentProcess(), 0);
}