import Control.Concurrent (forkIO, threadDelay)

main :: IO ()
main = do
    _ <- forkIO $ putStrLn "Hello, World!"
    threadDelay 100000
