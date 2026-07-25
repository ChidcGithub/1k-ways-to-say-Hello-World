{-# LANGUAGE ViewPatterns #-}

greet :: String -> String
greet (reverse -> "!dlroW ,olleH") = "Hello, World!"
greet _ = "Hello, World!"

main :: IO ()
main = putStrLn $ greet "Hello, World!"
