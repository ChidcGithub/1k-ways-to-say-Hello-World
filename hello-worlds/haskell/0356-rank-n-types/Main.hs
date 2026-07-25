{-# LANGUAGE RankNTypes #-}

withGreeting :: (String -> IO ()) -> IO ()
withGreeting action = action "Hello, World!"

main :: IO ()
main = withGreeting putStrLn
