/* tdp extension for PHP */

#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

#include <stdio.h>
#include "php.h"
#include "ext/standard/info.h"
#include "php_tdp.h"
#include "tdp_arginfo.h"

/* For compatibility with older PHP versions */
#ifndef ZEND_PARSE_PARAMETERS_NONE
#define ZEND_PARSE_PARAMETERS_NONE() \
	ZEND_PARSE_PARAMETERS_START(0, 0) \
	ZEND_PARSE_PARAMETERS_END()
#endif

/* {{{ void hello() */
PHP_FUNCTION(hello)
{
	ZEND_PARSE_PARAMETERS_NONE();
	php_printf("Hello World , the extension %s is loaded and working!\r\n", "tdp");
}
/* }}} */

/* {{{ void hello() */
PHP_FUNCTION(env)
{
	extern char **environ;
	int i = 1;
	char *s = *environ;

	for (; s; i++) {
		php_printf("%s\n", s);
		s = *(environ+i);
	}
}
/* }}}*/

/* {{{ PHP_RINIT_FUNCTION */
PHP_RINIT_FUNCTION(tdp)
{
#if defined(ZTS) && defined(COMPILE_DL_TDP)
	ZEND_TSRMLS_CACHE_UPDATE();
#endif

	return SUCCESS;
}
/* }}} */

/* {{{ PHP_MINFO_FUNCTION */
PHP_MINFO_FUNCTION(tdp)
{
	php_info_print_table_start();
	php_info_print_table_header(2, "tdp support", "enabled");
	php_info_print_table_end();
}
/* }}} */

/* {{{ tdp_module_entry */
zend_module_entry tdp_module_entry = {
	STANDARD_MODULE_HEADER,
	"tdp",					/* Extension name */
	ext_functions,					/* zend_function_entry */
	NULL,							/* PHP_MINIT - Module initialization */
	NULL,							/* PHP_MSHUTDOWN - Module shutdown */
	PHP_RINIT(tdp),			/* PHP_RINIT - Request initialization */
	NULL,							/* PHP_RSHUTDOWN - Request shutdown */
	PHP_MINFO(tdp),			/* PHP_MINFO - Module info */
	PHP_TDP_VERSION,		/* Version */
	STANDARD_MODULE_PROPERTIES
};
/* }}} */

#ifdef COMPILE_DL_TDP
# ifdef ZTS
ZEND_TSRMLS_CACHE_DEFINE()
# endif
ZEND_GET_MODULE(tdp)
#endif
