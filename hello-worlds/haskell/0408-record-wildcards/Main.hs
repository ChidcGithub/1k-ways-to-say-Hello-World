{-# LANGUAGE RecordWildCards #-}

data Greeting = Greeting { hello :: String, world :: String }

main :: IO ()
main = do
    let Greeting{..} = Greeting "Hello" "World!"
    putStrLn $ hello ++ ", " ++ world
