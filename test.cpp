extern "C" {
	typedef unsigned long long size_t;
	void *memset(void *s, int c, unsigned long n);
	void *__builtin_memset(void *s, int c, unsigned long n);
	typedef int errno_t;
	typedef unsigned int rsize_t;
	errno_t memset_s(void *dest, rsize_t destsz, int ch, rsize_t count);
	char *strcpy(char *dest, const char *src);
	void *memcpy(void *dest, const void *src, unsigned long n);
	void *malloc(unsigned long size);
	void free(void *ptr);
	extern void use_pw(char *pw);
	int printf(const char* format, ...);
	char* gets(char * str);
}

int main(int argc, char* argv[]) {
	int x; // Compliant - variable defined and will be used
  	int y; // Compliant - variable defined and will be used
   	int result = x + y; // x and y variables used
  	x = 0; // Non-compliant - Variable defined, but x is
  		   // not subsequently used and goes out of scope
  	y = 0; // Non-compliant - Variable defined, but y is
           // not subsequently used and goes out of scope
	printf("x is %d",x);
    return result;
}

