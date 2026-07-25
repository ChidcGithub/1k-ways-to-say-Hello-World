main :: IO ()
main = do
    putStrLn greeting
  where
    greeting = hello ++ world
    hello = "Hello, "
    world = "World!"
