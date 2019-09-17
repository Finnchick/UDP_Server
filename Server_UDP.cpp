#include "pch.h"
#include <winsock2.h>
#include <stdlib.h>
#include <Windows.h>
#include <process.h>
#include <iostream>

int main()
{
	WORD wVersionRequested;
	WSADATA wsaData;
	int err;
	wVersionRequested = MAKEWORD(2, 2);
	err = WSAStartup(wVersionRequested, &wsaData);

	SOCKET s = socket(AF_INET, SOCK_DGRAM, 0);

	struct sockaddr_in ad;
	ad.sin_port = htons(1280);
	ad.sin_family = AF_INET;
	ad.sin_addr.s_addr = 0;
	bind(s, (struct sockaddr*) & ad, sizeof(ad));
	char b[200], tmp = '\0';
	int l = sizeof(ad);
	int rv = recvfrom(s, b, lstrlen(b), 0, struct sockaddr)
}

