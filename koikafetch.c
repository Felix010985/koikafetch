/*
 * SPDX-License-Identifier: MIT
 * Copyright (c) 2026 Университет Масикса (Санкт Петербург) имени Маи Койки
 */
#include <stdio.h>

void printmaya() {
	FILE *f = fopen("mayakoika.six", "r");
	if (f) {
		/* построчно читаем six файл
		 * так как терминал понимает сразу поток то даже не надо преобразовать в массив и подключать в виде заголовка.
		 * достаточно просто иметь six файл рядом с бинарем чтобы его читать сразу, ну либо тут захардкодить путь можно в принципе тоже.
		 */
		char ch;
		while((ch = fgetc(f)) != EOF) {
			putchar(ch);
		}
		fclose(f);
	}
}

int main() {
	/* сначала короче принтим Маю */
	printmaya();

	/* обязательно тут курсор переставить вправо чтобы начать рисовать текст справа */
	printf("\033[12A\033[26C\033[35mmaya\033[0m@\033[35mkoika\033[0m\n");
	printf("\033[26C---------------------\n");
	printf("\033[26C\033[35mOS\033[0m: MayakoikaOS on Kapustix x88\n");
	printf("\033[26C\033[35mKernel\033[0m: 1.4.88-rc2\n");
	printf("\033[26C\033[35mUptime\033[0m: 14 hours, 88 mins\n");
	printf("\033[26C\033[35mShell\033[0m: koiksh 7.2\n");
	printf("\033[26C\033[35mDE\033[0m: Mayakoika ENV (X11)\n");
	printf("\033[26C\033[35mWM\033[0m: Mayu (X11)\n");
	printf("\033[26C\033[35mTerminal\033[0m: Koikterm\n");
	printf("\033[26C\033[35mCPU\033[0m: GenuineMayakoika i1-488MK x88-64\n");
	printf("\033[26C\033[35mGPU\033[0m: Maya WWVMPipe OpenMAYAKOIKA\n");
	printf("\033[26C\033[35mMemory\033[0m: 333MiB / 16148MiB\n\n");

	printf("\033[26C\033[40m   \033[41m   \033[42m   \033[43m   \033[44m   \033[45m   \033[46m   \033[47m   \033[0m\n");
	printf("\033[26C\033[100m   \033[101m   \033[102m   \033[103m   \033[104m   \033[105m   \033[106m   \033[107m   \033[0m\n");

	return 0;
}
