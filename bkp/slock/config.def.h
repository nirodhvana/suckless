/* user and group to drop privileges to */
static const char *user  = "Saatwat";
static const char *group = "Sakhaa";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#96291f",   /* wrong password */

};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
