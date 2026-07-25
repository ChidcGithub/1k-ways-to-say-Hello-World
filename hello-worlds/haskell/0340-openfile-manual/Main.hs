import System.IO (openFile, hPutStrLn, hClose, IOMode(WriteMode))
main = do
    h <- openFile "hello.txt" WriteMode
    hPutStrLn h "Hello, World!"
    hClose h
