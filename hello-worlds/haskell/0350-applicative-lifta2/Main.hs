import Control.Applicative (liftA2)
main = liftA2 (++) (putStr "Hello, ") (putStrLn "World!")
