import Control.Concurrent.STM (atomically, newTVar, readTVar, writeTVar)

main :: IO ()
main = do
    tv <- atomically $ newTVar ""
    atomically $ writeTVar tv "Hello, World!"
    msg <- atomically $ readTVar tv
    putStrLn msg
