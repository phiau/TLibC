/* Generated by re2c 0.13.5 on Wed Apr 16 11:26:17 2014 */
#line 1 "D:/GitHub/TLibC/source/protocol/tlibc_xml_reader_l.re"
#include "platform/tlibc_platform.h"
#include "protocol/tlibc_xml_reader.h"
#include "protocol/tlibc_xml_reader_scanner.h"
#include "tlibc_xml_reader_l.h"
#include <string.h>




		
tlibc_xml_reader_token_t tlibc_xml_reader_scan(tlibc_xml_reader_t *self)
{
	tlibc_xml_reader_scanner_context_t *sp = NULL;
	self->error_code = E_TLIBC_NOERROR;
restart:
	sp = &self->scanner_context_stack[self->scanner_context_stack_num - 1];
	if(YYCURSOR >= YYLIMIT)
	{
		if(self->scanner_context_stack_num > 0)
		{
			if(self->scanner_context_stack[self->scanner_context_stack_num - 1].filecontent_ptr)
			{
				free(self->scanner_context_stack[self->scanner_context_stack_num - 1].filecontent_ptr);
			}
			--self->scanner_context_stack_num;
			goto restart;
		}
		return tok_end;
	}
	sp->yylloc.first_line = sp->yylineno;
	sp->yylloc.first_column = sp->yycolumn;
	yytext = YYCURSOR;

#line 37 "D:/GitHub/TLibC/source/gen/tlibc_xml_reader_l.c"
{
	YYCTYPE yych;
	switch (YYGETCONDITION()) {
	case yycINITIAL: goto yyc_INITIAL;
	}
/* *********************************** */
yyc_INITIAL:

	YYFILL(9);
	yych = *YYCURSOR;
	switch (yych) {
	case '<':	goto yy4;
	default:	goto yy2;
	}
yy2:
	++YYCURSOR;
yy3:
	yyleng = YYCURSOR - yytext; tlibc_xml_reader_locate(self);
#line 123 "D:/GitHub/TLibC/source/protocol/tlibc_xml_reader_l.re"
	{ goto restart;					 }
#line 58 "D:/GitHub/TLibC/source/gen/tlibc_xml_reader_l.c"
yy4:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '!':	goto yy9;
	case '/':	goto yy5;
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '_':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy7;
	default:	goto yy3;
	}
yy5:
	yych = *++YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case '>':	goto yy6;
	default:	goto yy24;
	}
yy6:
	YYCURSOR = YYMARKER;
	goto yy3;
yy7:
	++YYCURSOR;
	YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '_':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy7;
	case '>':	goto yy21;
	default:	goto yy6;
	}
yy9:
	yych = *++YYCURSOR;
	switch (yych) {
	case '-':	goto yy10;
	case 'I':
	case 'i':	goto yy11;
	default:	goto yy6;
	}
yy10:
	yych = *++YYCURSOR;
	switch (yych) {
	case '-':	goto yy19;
	default:	goto yy6;
	}
yy11:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'N':
	case 'n':	goto yy12;
	default:	goto yy6;
	}
yy12:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'C':
	case 'c':	goto yy13;
	default:	goto yy6;
	}
yy13:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'L':
	case 'l':	goto yy14;
	default:	goto yy6;
	}
yy14:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'U':
	case 'u':	goto yy15;
	default:	goto yy6;
	}
yy15:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'D':
	case 'd':	goto yy16;
	default:	goto yy6;
	}
yy16:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'E':
	case 'e':	goto yy17;
	default:	goto yy6;
	}
yy17:
	++YYCURSOR;
	yyleng = YYCURSOR - yytext; tlibc_xml_reader_locate(self);
#line 60 "D:/GitHub/TLibC/source/protocol/tlibc_xml_reader_l.re"
	{
	tlibc_error_code_t r;
	const char* file_begin;
	const char* file_end;
	size_t file_len;
	char file[TLIBC_MAX_PATH_LENGTH];

	for(file_begin = NULL; YYCURSOR != YYLIMIT; ++YYCURSOR)
	{
		if(*YYCURSOR == '"')
		{
			++YYCURSOR;
			file_begin = YYCURSOR;
			break;
		}
	}
	if(file_begin == NULL)
	{
		self->error_code = E_TLIBC_SYNTAX;
		return tok_error;
	}
	for(file_end = NULL; YYCURSOR != YYLIMIT; ++YYCURSOR)
	{
		if(*YYCURSOR == '"')
		{			
			file_end = YYCURSOR;
			++YYCURSOR;
			break;
		}		
	}
	if(file_end == NULL)
	{
		self->error_code = E_TLIBC_SYNTAX;
		return tok_error;
	}
	for(;YYCURSOR != YYLIMIT; ++YYCURSOR)
	{
		if(*YYCURSOR == '>')
		{
			++YYCURSOR;
			break;
		}
	}
	file_len = file_end - file_begin;
	if(file_len >= TLIBC_MAX_PATH_LENGTH)
	{
		self->error_code = E_TLIBC_OUT_OF_MEMORY;
		return tok_error;
	}
	memcpy(file, file_begin, file_len);
	file[file_len] = 0;

	r = tlibc_xml_reader_push_file(self, file); 
	if(r != E_TLIBC_NOERROR)
	{
		self->error_code = r;
		return tok_error;
	}
	goto restart;
}
#line 329 "D:/GitHub/TLibC/source/gen/tlibc_xml_reader_l.c"
yy19:
	++YYCURSOR;
	yyleng = YYCURSOR - yytext; tlibc_xml_reader_locate(self);
#line 45 "D:/GitHub/TLibC/source/protocol/tlibc_xml_reader_l.re"
	{
	const char * comment_begin = NULL;
	for(comment_begin = YYCURSOR; YYCURSOR != YYLIMIT; ++YYCURSOR)
	{
		if(YYCURSOR - comment_begin >= 2)
		{
			if((*(YYCURSOR - 2) == '-') && (*(YYCURSOR - 1) == '-') && (*(YYCURSOR - 0) == '>'))
			{
				goto restart;
			}
		}
	}
	goto restart;
}
#line 348 "D:/GitHub/TLibC/source/gen/tlibc_xml_reader_l.c"
yy21:
	++YYCURSOR;
	yyleng = YYCURSOR - yytext; tlibc_xml_reader_locate(self);
#line 120 "D:/GitHub/TLibC/source/protocol/tlibc_xml_reader_l.re"
	{return tok_tag_begin;															}
#line 354 "D:/GitHub/TLibC/source/gen/tlibc_xml_reader_l.c"
yy23:
	++YYCURSOR;
	YYFILL(1);
	yych = *YYCURSOR;
yy24:
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '_':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy23;
	case '>':	goto yy25;
	default:	goto yy6;
	}
yy25:
	++YYCURSOR;
	yyleng = YYCURSOR - yytext; tlibc_xml_reader_locate(self);
#line 121 "D:/GitHub/TLibC/source/protocol/tlibc_xml_reader_l.re"
	{return tok_tag_end;															}
#line 432 "D:/GitHub/TLibC/source/gen/tlibc_xml_reader_l.c"
}
#line 124 "D:/GitHub/TLibC/source/protocol/tlibc_xml_reader_l.re"
	
}
