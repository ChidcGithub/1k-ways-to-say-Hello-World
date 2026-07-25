import Data.Char (toUpper)

main = putStrLn $ (\(h:w) -> toUpper h : w) "hello, world!"
