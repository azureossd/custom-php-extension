--TEST--
tdp_test2() Basic test
--SKIPIF--
<?php
if (!extension_loaded('tdp')) {
    echo 'skip';
}
?>
--FILE--
<?php
var_dump(tdp_hello());
var_dump(tdp_env());
?>
--EXPECT--
