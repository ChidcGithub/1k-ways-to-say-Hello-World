{-# LANGUAGE TypeFamilies #-}

class Greeting a where
    type GreetingResult a
    greet :: a -> GreetingResult a

data HelloWorld = HelloWorld

instance Greeting HelloWorld where
    type GreetingResult HelloWorld = String
    greet _ = "Hello, World!"

main :: IO ()
main = putStrLn $ greet HelloWorld
