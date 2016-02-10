<?php

function foo() {
    try { return str_repeat("a", 2); }
    finally { return true; }
}

var_dump(foo());
?>
