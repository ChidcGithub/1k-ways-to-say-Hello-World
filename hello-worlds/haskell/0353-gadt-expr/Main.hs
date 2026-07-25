{-# LANGUAGE GADTs #-}
data Greeting a where
    HelloWorld :: Greeting String

render :: Greeting String -> String
render HelloWorld = "Hello, World!"

main :: IO ()
main = putStrLn $ render HelloWorld
