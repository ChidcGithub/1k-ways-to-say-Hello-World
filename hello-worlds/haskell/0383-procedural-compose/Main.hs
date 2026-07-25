main :: IO ()
main = do
    let hello = "Hello, "
        world = "World!"
    let greeting = hello ++ world
    putStrLn greeting
