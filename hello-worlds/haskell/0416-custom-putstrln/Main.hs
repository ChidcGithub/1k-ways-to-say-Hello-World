myPutStrLn :: String -> IO ()
myPutStrLn s = putStr s >> putStr "\n"

main :: IO ()
main = myPutStrLn "Hello, World!"
