import Control.Concurrent (forkIO, threadDelay)

main :: IO ()
main = do
    _ <- forkIO $ do
        threadDelay 50000
        putStrLn "Hello, World!"
    threadDelay 100000
