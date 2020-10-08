/* tdp extension for PHP */

#ifndef PHP_TDP_H
# define PHP_TDP_H

extern zend_module_entry tdp_module_entry;
# define phpext_tdp_ptr &tdp_module_entry

# define PHP_TDP_VERSION "0.1.0"

# if defined(ZTS) && defined(COMPILE_DL_TDP)
ZEND_TSRMLS_CACHE_EXTERN()
# endif

#endif	/* PHP_TDP_H */
