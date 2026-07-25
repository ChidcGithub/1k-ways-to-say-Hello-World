data Greeting = Hello | World deriving Show

main :: IO ()
main = putStrLn $ show Hello ++ ", " ++ show World ++ "!"
