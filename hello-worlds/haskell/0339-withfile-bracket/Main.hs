import System.IO (withFile, IOMode(WriteMode), hPutStrLn)
main = withFile "hello.txt" WriteMode (\h -> hPutStrLn h "Hello, World!")
