{-# LANGUAGE BlockArguments #-}

main = when True do
    putStrLn "Hello, World!"
  where
    when True act = act
    when False _ = return ()
