function printRec(s, i) {
    if (i >= s.length) { console.log(); return; }
    process.stdout.write(s[i]);
    printRec(s, i + 1);
}
printRec("Hello, World!", 0);
