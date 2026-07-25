---
id: 0346
language: haskell
paradigm: functional
output: network
platform: cli
era: modern
tags: []
notes: "Starts a TCP server on port 8080 that responds with Hello, World!"
author: ChidcGithub
date: 2026-07-25
---

# #0346 · Haskell TCP-Server

## Description

A minimal TCP server that listens on port 8080 and responds with "Hello, World!" to the first connection, then exits. Uses the `Network.Socket` API from `base`, the bracket pattern for resource safety, and standard socket setup (bind, listen, accept, write, close).

## Source Code

`Main.hs`:

```haskell
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
```

## Run

```bash
cd hello-worlds/haskell/0346-tcp-server
runhaskell Main.hs &
curl localhost:8080
kill %1
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `functional` | IO actions via bracket |
| output | `network` | TCP socket response |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[]` | No special technique |
