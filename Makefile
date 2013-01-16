all: example systemd-journald.pdf

example: example.c
	gcc -O0 -Wall -Wextra -std=gnu99 -g3 -lsystemd-journal example.c -o example

systemd-journald.pdf: systemd-journald.tex
	pdflatex systemd-journald.tex
