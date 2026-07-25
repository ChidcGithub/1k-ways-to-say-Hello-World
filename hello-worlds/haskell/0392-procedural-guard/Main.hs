greet :: Bool -> String
greet loud
    | loud      = "HELLO, WORLD!"
    | otherwise = "Hello, World!"

main :: IO ()
main = putStrLn $ greet False
