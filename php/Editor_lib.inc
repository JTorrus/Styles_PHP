<?php
    function showContent() {
        $file = fopen("../css/Estil.css", "r+") or die ("Hi ha hagut un error amb el fitxer");
        echo fread($file, filesize("../css/Estil.css"));
        fclose($file);
    }

    function writeContent($elements) {
        $file = fopen("../css/Estil.css", "w") or die ("Hi ha hagut un error amb el fitxer");
        fwrite($file, $elements);
        fclose($file);
    }
?>