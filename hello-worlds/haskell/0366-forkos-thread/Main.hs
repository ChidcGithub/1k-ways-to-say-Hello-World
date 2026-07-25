import Control.Concurrent (forkOS, threadDelay)

main :: IO ()
main = do
    _ <- forkOS $ putStrLn "Hello, World!"
    threadDelay 100000
