#define CMDLENGTH 45
#define DELIMITER " | "
#define CLICKABLE_BLOCKS

const Block blocks[] = {
	//BLOCK("sb-mail",    1800, 17),
	//BLOCK("sb-music",   0,    18),
  BLOCK("sb-kbselect", 1, 23),
	BLOCK("sb-disk",    1800, 19),
	BLOCK("sb-memory",  10,   20),
  BLOCK("sb-cpu",     10,   21),
	//BLOCK("sb-loadavg", 5,    21),
	//BLOCK("sb-mic",     0,    26),
	//BLOCK("sb-record",  0,    27),
	//BLOCK("sb-volume",  0,    22),
	//BLOCK("sb-battery", 5,    23),
	BLOCK("sb-clock",    1,    24)
};
