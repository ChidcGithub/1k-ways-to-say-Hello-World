newtype Greeting = Greeting { getGreeting :: String }
main = putStrLn $ getGreeting $ Greeting "Hello, World!"
