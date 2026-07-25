import Network.Socket
import System.IO (hPutStrLn, hClose)
import Control.Exception (bracket)

main :: IO ()
main = do
    let hints = defaultHints { addrFlags = [AI_PASSIVE], addrSocketType = Stream }
    addr:_ <- getAddrInfo (Just hints) Nothing (Just "8080")
    bracket (socket (addrFamily addr) (addrSocketType addr) (addrProtocol addr)) close $ \sock -> do
        setSocketOption sock ReuseAddr 1
        bind sock (addrAddress addr)
        listen sock 1
        (conn, _) <- accept sock
        hPutStrLn conn "Hello, World!"
        hClose conn
