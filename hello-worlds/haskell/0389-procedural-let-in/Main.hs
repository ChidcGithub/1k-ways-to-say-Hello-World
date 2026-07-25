main :: IO ()
main = do
    let greeting = let hello = "Hello, "
                       world = "World!"
                   in hello ++ world
    putStrLn greeting
