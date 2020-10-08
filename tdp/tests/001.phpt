--TEST--
Check if tdp is loaded
--SKIPIF--
<?php
if (!extension_loaded('tdp')) {
    echo 'skip';
}
?>
--FILE--
<?php
echo 'The extension "tdp" is available';
?>
--EXPECT--
The extension "tdp" is available
