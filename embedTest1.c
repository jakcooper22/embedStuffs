static struct i2c_adapter tiny_adapter = {
  .owner  = THIS_MODULE,
  .class  = I2C_ADAP_CLASS_SMBUS,
  .algo   = &tiny_algorithm,
  .name   = "tiny adapter
};

